#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 95511236
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p, signed char p_5, unsigned long long p_11,
                 float p_19)
{
  short v_17;
  char v_15;
  double v_13;
  float v_9;
  double v_7;
  int v;
  unsigned int result;
  v_15 = (char)p_11;
  v_13 = -701.804297769;
  v_9 = -8.73183999158e+37f;
  v_7 = -628437190.275;
  v = (int)p_19;
  while ((unsigned long long)(! (- p - (unsigned long)(16763 * (int)p_5))) != 
         ((unsigned long long)((double)v_9 + -140.946891308) - p_11) << (
         p & 63UL)) {
    v_17 = (unsigned int)v_15 | (unsigned int)v_13 / 56555U;
    v_7 = (double)(992078031LL * (long long)v_17 - (long long)(- ((float)p_5 + p_19)));
    v_13 = (double)(! (unsigned char)202);
    v_9 = (float)(! ((unsigned long long)p - p_11) / (unsigned long long)(
                  (unsigned long)v * (p + p) + 784UL));
  }
  while_0_break: ;
  if (0. < - v_7) result = 17220U; else result = 83U;
  return result;
}


