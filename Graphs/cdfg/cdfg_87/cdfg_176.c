#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 711270218
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long long p[1], float p_17)
{
  long v_15;
  unsigned short v_13;
  short v_11;
  float v_9;
  unsigned long v_7;
  float v_5;
  double v;
  unsigned char result;
  v_15 = (long)p_17;
  v_13 = (unsigned short)8445;
  v_11 = (short)p[0];
  v_9 = p_17;
  v_5 = 1.07315304181e+38f;
  v = 853.888571062;
  result = (unsigned char)p[0];
  while (65280LL > (long long)v_13 * (p[0] % ((p[0] & (long long)v_5) + 510LL))) {
    v_9 = v_15 * 32358L;
    v_15 = (long)p_17;
    result = (unsigned char)(! p[0]);
    v_13 = (unsigned short)(((p[0] - 63920LL) + -465292122LL / (p[0] + 285LL)) % (
                            ! ((long long)v_11 % (p[0] + 770LL)) + 184LL));
  }
  while_0_break: ;
  if ((unsigned int)(- (- v * (double)p[0])) != 30130U << (- (-8871 ^ (int)((short)v_9)) & 31)) 
    result = (unsigned char)160;
  else {
    v_7 = (unsigned long)(! ((681338750U + (unsigned int)v_5) >> (! p[0] & 31LL)));
    v_5 = (float)((-27336 % ((int)((short)v_5) + 115)) / (-47 * (int)result + 176) ^ (
                  (int)((short)v_9) - (int)v_11));
    result = (unsigned char)((- v - (double)((float)p[0] / (v_5 + 362.f))) * (double)(
                             113UL + (v_7 - 4294949295UL)));
  }
  return result;
}


