#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 757885492
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p, unsigned int p_5, unsigned int p_7,
         unsigned int p_13, char p_15[2][4])
{
  long v_23;
  short v_21;
  long long v_19;
  long v_17;
  unsigned long long v_11;
  int v_9;
  unsigned short v;
  long result;
  v_23 = -40539L;
  v_21 = (short)p_15[1][3];
  v_19 = (long long)p;
  v_17 = (long)p_5;
  if (((long long)((long)-3.22450759006e+38 + v_17) % ((v_19 - (long long)p) + 742LL) | (long long)v_21) <= (long long)(~ (
      (unsigned long)p_5 % (unsigned long)(v_23 + 440L) - 221UL))) v_9 = 42026;
  else {
    v_11 = (unsigned long long)p_13;
    v_9 = (int)v_11;
  }
  if ((float)(! (~ p_7) - (unsigned int)v_9) == 6369479680.f) {
    v = (unsigned short)p;
    result = (long)(- ((int)p % ((int)v + 878) << ((int)p % ((int)p + 332) & 31)));
  }
  else result = (long)((float)(- (146U | p_5)) * -1669530240.f);
  return result;
}


