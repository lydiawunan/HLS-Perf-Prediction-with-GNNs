#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 228163065
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p, float p_5, unsigned short p_9[2][5])
{
  unsigned int v_13;
  unsigned char v_11;
  char v_7;
  short v;
  unsigned short result;
  v_13 = (unsigned int)p;
  v_11 = p;
  v_7 = (char)(v_13 + 2U);
  if (- ((int)v_11) <= 723) {
    v_7 = (char)(0. + ((double)((int)v_7 - (int)p_9[1][3]) - -638.07077321));
    v = (short)((unsigned long long)(((int)p - 12370) - (int)(p_5 * (float)v_7)) - 404287226ULL);
    result = (unsigned short)(- (-75 - (int)v) / ((int)v + 559));
  }
  else result = (unsigned short)829;
  return result;
}


