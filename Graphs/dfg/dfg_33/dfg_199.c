#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 868993889
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p, unsigned char p_5, char p_9, short p_11[5][2][4],
         double p_15)
{
  signed char v_17;
  double v_13;
  int v_7;
  float v;
  long result;
  v_17 = (signed char)p_15;
  v_13 = -7.06957607707e+37;
  v_7 = -901185116;
  v_7 = (int)(- (681.460205078f * (float)((int)p_11[2][0][3] % ((int)((short)v_13) + 944)))) + 
        ((v_7 / ((int)p_15 + 726)) * (int)(! v_17)) / ((int)p_5 + 648);
  v = (float)(17939UL - ((24487UL * (unsigned long)v_7 + (unsigned long)(- p_9)) - 61797UL));
  result = (long)((unsigned long long)(- (! ((int)p % ((int)((short)v) + 508)))) % (
                  ! (18446744073709486111ULL % (unsigned long long)((int)p_5 + 9)) * 18446660593667512336ULL + 371ULL));
  result = ! ((- result + 11441L) / (long)((((int)p - 32311) + 220) + 347));
  return result;
}


