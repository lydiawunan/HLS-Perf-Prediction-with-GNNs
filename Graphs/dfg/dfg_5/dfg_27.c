//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 667857558
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, unsigned short p_9, signed char p_11,
          unsigned short p_15, unsigned long p_17)
{
  unsigned short v_21;
  unsigned int v_19;
  int v_13;
  unsigned char v_7;
  float v_4;
  char v;
  short result;
  v_21 = (unsigned short)37435;
  v_19 = 4238733775U;
  v_7 = p;
  v_13 = (int)-183.878144728;
  v = (char)(330711620U - (v_19 / 28U - (unsigned int)((int)p_11 >> 7)) * (unsigned int)(
                          (int)v_21 % ((int)p_15 + 863) & ((int)p_15 >> (
                                                           (int)v_21 & 15))));
  v_4 = (float)(! ((unsigned int)((int)v_7 % ((int)p_9 + 955)) * 4294925853U) + (unsigned int)(
                (((int)p_11 - 158) + v_13) / ((int)(-4.84831900065e+37 * (double)(
                                                    (unsigned long)p_15 - p_17)) + 747)));
  result = (short)((int)((unsigned char)(- ((float)(! v) * v_4))) + (int)(! p));
  return result;
}


