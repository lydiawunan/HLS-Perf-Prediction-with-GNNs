#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 875678492
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p, unsigned int p_19)
{
  unsigned long long v_17;
  unsigned char v_15;
  unsigned long long v_13;
  long v_11;
  unsigned char v_9;
  unsigned int v_6;
  float v_4;
  long v;
  unsigned short result;
  v_17 = (unsigned long long)p;
  v_15 = (unsigned char)191;
  v_11 = (long)p_19;
  v_9 = (unsigned char)14;
  v_6 = p_19;
  v_4 = -3.98014602983e+37f;
  v_13 = (unsigned long long)(~ (~ v_11) * (long)(! (- v_9)));
  if ((long long)(~ p) + (6102959512LL - (long long)(1816.f / (v_4 + 324.f))) < (long long)(
      ((163UL + p) >> (v_17 * 19209ULL & 31ULL)) + (unsigned long)(! p_19))) {
    v = (long)((unsigned long long)((unsigned long)v_6 * (p * 4294909996UL)) % (
               ((unsigned long long)((long)v_9 / (v_11 + 671L)) | v_13 / (unsigned long long)(
                                                                  (int)v_15 + 539)) + 553ULL));
    v_4 = (float)(- (~ (~ 588160308U)));
    result = (unsigned short)(((unsigned long)(v % ((long)v_4 + 1000L)) - 3559939106UL) + 919291758UL);
  }
  else result = (unsigned short)6597;
  return result;
}


