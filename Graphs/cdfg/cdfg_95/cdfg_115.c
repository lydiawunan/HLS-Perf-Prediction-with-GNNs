#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 131812984
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, unsigned long p_5, unsigned short p_7, float p_9,
         unsigned char p_13)
{
  unsigned char v_15;
  float v_11;
  int v;
  char result;
  v_15 = (unsigned char)(- ((double)p_9 * -1.75729660868e+14));
  if ((int)((signed char)((float)((unsigned int)p_13 / 4294910484U | (unsigned int)v_15) + - (- p))) == 72) {
    v = (int)(- ((62157L % (long)((int)p_7 + 316)) / 26404L));
    result = (char)(- ((p_5 * 54265UL) % (p_5 + 559UL)));
    result = (char)(! (((unsigned long)p - 4294967223UL) & (unsigned long)(
                       (int)result / (v + 932))));
  }
  else {
    v_11 = (float)(short)18631;
    result = (char)((p_9 * p_9 + - v_11) / (p_9 + 252.f));
  }
  return result;
}


