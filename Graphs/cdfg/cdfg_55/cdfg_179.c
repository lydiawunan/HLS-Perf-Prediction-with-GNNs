#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 249891741
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p, unsigned long long p_5, double p_7,
                  unsigned long long p_9, signed char p_11)
{
  double v_23;
  signed char v_21;
  unsigned long v_19;
  long v_17;
  unsigned long long v_15;
  char v_13;
  long long v;
  unsigned long result;
  v_23 = (double)p;
  v_21 = p_11;
  v_19 = 22913UL;
  if (~ p_5 >= (unsigned long long)((int)(- (- p_7)) * ! (-96 * (int)((char)v_23)))) {
    v_17 = -2612L;
    v_13 = (char)(60884ULL * (1029584382ULL - (unsigned long long)(! p)));
    v_15 = (unsigned long long)v_17;
  }
  else {
    v_19 = (unsigned long)(((int)p_11 + (int)((signed char)-429.905670166f)) + (
                           (int)p << ((int)v_21 & 15))) + v_19;
    v_13 = (char)p_9;
    v_15 = (unsigned long long)(- (~ v_19));
  }
  if ((13769ULL + (unsigned long long)((int)((char)p_7) + (int)v_13)) - 
      p_5 * (18446744072642636405ULL * p_5) <= (unsigned long long)(-624226.694104 * (
                                                                    - p_7 / (
                                                                    (double)(~ v_15) + 878.)))) {
    v = (long long)p_5;
    result = (unsigned long)(- v / (long long)((int)(- p) + 60));
  }
  else result = (unsigned long)(18446744073709548425ULL | ~ (p_5 * (unsigned long long)p_7));
  return result;
}


