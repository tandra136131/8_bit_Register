library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity register_1bit is
    Port (
        CLK   : in  STD_LOGIC;
        RESET : in  STD_LOGIC;
        LOAD  : in  STD_LOGIC;
        D     : in  STD_LOGIC;
        Q     : out STD_LOGIC
    );
end register_1bit;

architecture Structural of register_1bit is
    component d_flip_flop
        Port ( D : in STD_LOGIC; CLK : in STD_LOGIC;
               Q : out STD_LOGIC; Q_n : out STD_LOGIC);
    end component;

    component mux2
        Port ( D0 : in STD_LOGIC; D1 : in STD_LOGIC;
               SEL : in STD_LOGIC; Y : out STD_LOGIC);
    end component;

    component not_gate
        Port ( A : in STD_LOGIC; Y : out STD_LOGIC);
    end component;

    component and_gate
        Port ( A : in STD_LOGIC; B : in STD_LOGIC; Y : out STD_LOGIC);
    end component;

    signal q_feedback, mux_out, reset_n, d_next, qn_unused : STD_LOGIC;
begin
    U1: mux2 port map (D0 => q_feedback, D1 => D, SEL => LOAD, Y => mux_out);
    U2: not_gate port map (A => RESET, Y => reset_n);
    U3: and_gate port map (A => mux_out, B => reset_n, Y => d_next);
    U4: d_flip_flop port map (D => d_next, CLK => CLK, Q => q_feedback, Q_n => qn_unused);
    Q <= q_feedback;
end Structural;
