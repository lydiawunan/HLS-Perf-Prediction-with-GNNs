//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1010449001
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p, short p_4, signed char p_6[2][3], short p_8[4][3],
                   unsigned short p_10)
{
  float v_13;
  char v;
  unsigned short result;
  v_13 = (float)(p + (int)p_10);
  result = (unsigned short)(! ((int)p_4 - (int)((short)((v_13 * (float)p_10) * 120.f))));
  v = (char)result;
  result = (unsigned short)(! ((int)8.39592639973e+37 * p + (int)(! p_4)) * (
                            (int)p_6[0][2] ^ ((int)p_8[2][1] % ((int)p_10 + 960) | (int)(- v))));
  return result;
}


