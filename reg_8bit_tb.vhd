library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity register_8bit_tb is
end register_8bit_tb;

architecture Behavioral of register_8bit_tb is
    component register_8bit
        Port ( CLK : in STD_LOGIC; RESET : in STD_LOGIC;
               LOAD : in STD_LOGIC;
               D : in STD_LOGIC_VECTOR(7 downto 0);
               Q : out STD_LOGIC_VECTOR(7 downto 0));
    end component;

    signal CLK_tb   : STD_LOGIC := '0';
    signal RESET_tb : STD_LOGIC := '0';
    signal LOAD_tb  : STD_LOGIC := '0';
    signal D_tb     : STD_LOGIC_VECTOR(7 downto 0) := (others => '0');
    signal Q_tb     : STD_LOGIC_VECTOR(7 downto 0);
begin
    UUT: register_8bit
        port map (CLK => CLK_tb, RESET => RESET_tb,
                  LOAD => LOAD_tb, D => D_tb, Q => Q_tb);

    clk_process: process
    begin
        while true loop
            CLK_tb <= '0'; wait for 10 ns;
            CLK_tb <= '1'; wait for 10 ns;
        end loop;
    end process;

    stimulus: process
    begin
        -- Test 1: synchronous reset
        wait until falling_edge(CLK_tb);
        RESET_tb <= '1'; LOAD_tb <= '0'; D_tb <= x"FF";
        wait until rising_edge(CLK_tb); wait for 1 ns;
        assert Q_tb = x"00" report "FAIL: reset" severity error;

        -- Test 2: LOAD=0, register must hold zero
        wait until falling_edge(CLK_tb);
        RESET_tb <= '0'; LOAD_tb <= '0'; D_tb <= x"AA";
        wait until rising_edge(CLK_tb); wait for 1 ns;
        assert Q_tb = x"00" report "FAIL: hold after reset" severity error;

        -- Test 3: load AA
        wait until falling_edge(CLK_tb);
        LOAD_tb <= '1'; D_tb <= x"AA";
        wait until rising_edge(CLK_tb); wait for 1 ns;
        assert Q_tb = x"AA" report "FAIL: load AA" severity error;

        -- Test 4: hold AA while D changes
        wait until falling_edge(CLK_tb);
        LOAD_tb <= '0'; D_tb <= x"55";
        wait until rising_edge(CLK_tb); wait for 1 ns;
        assert Q_tb = x"AA" report "FAIL: hold AA" severity error;

        -- Test 5: load 55
        wait until falling_edge(CLK_tb);
        LOAD_tb <= '1'; D_tb <= x"55";
        wait until rising_edge(CLK_tb); wait for 1 ns;
        assert Q_tb = x"55" report "FAIL: load 55" severity error;

        -- Test 6: load 3C
        wait until falling_edge(CLK_tb);
        D_tb <= x"3C";
        wait until rising_edge(CLK_tb); wait for 1 ns;
        assert Q_tb = x"3C" report "FAIL: load 3C" severity error;

        -- Test 7: reset overrides LOAD
        wait until falling_edge(CLK_tb);
        RESET_tb <= '1'; LOAD_tb <= '1'; D_tb <= x"FF";
        wait until rising_edge(CLK_tb); wait for 1 ns;
        assert Q_tb = x"00" report "FAIL: reset priority" severity error;

        report "PASS: 8-bit register testbench completed" severity note;
        wait;
    end process;
end Behavioral;
