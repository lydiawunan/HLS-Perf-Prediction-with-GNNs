#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 249226009
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, signed char p_9, unsigned short p_11[1][5],
              float p_13, long p_23)
{
  unsigned long long v_21;
  long v_19;
  short v_17;
  char v_15;
  unsigned char v_7;
  long long v_5;
  unsigned char v;
  long long result;
  v_21 = (unsigned long long)p;
  v_19 = 558671943L;
  v_17 = (short)p_11[0][0];
  v_15 = (char)126;
  if ((unsigned long long)v_19 != ((v_21 - (unsigned long long)p_23) / (unsigned long long)(
                                   (long long)p_9 % -502123725LL + 412LL)) / (
                                  (unsigned long long)1.80250684897e+38 + 124ULL)) 
    v = (unsigned char)(- -9025697792.f);
  else {
    v_5 = (p + (long long)p_13) * (long long)((int)((short)(-3.25534377704e+38 + (double)v_15)) * (int)(~ v_17));
    v_7 = (unsigned char)(- ((v_5 >> ((int)p_9 & 63)) * (long long)(177 + (int)p_11[0][4])));
    v = (unsigned char)((v_5 % -10LL) / (long long)(31621 / ((int)(! v_7) + 935) + 857));
  }
  if (1349057280.f > (float)(- (- v))) result = (long long)(- 2.18707369285e+38);
  else result = p;
  return result;
}


