#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 144162974
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, char p_11, char p_17, long long p_19,
                unsigned int p_21)
{
  unsigned char v_31;
  unsigned char v_29;
  unsigned int v_27;
  unsigned char v_25;
  unsigned int v_23;
  unsigned char v_15;
  unsigned long long v_13;
  short v_9;
  unsigned char v_7;
  unsigned short v_5;
  long v;
  signed char result;
  v_31 = (unsigned char)86;
  v_29 = (unsigned char)149;
  v_27 = 3350309669U;
  v_25 = (unsigned char)104;
  v_23 = 4294966086U;
  v_9 = (short)22552;
  v_7 = (unsigned char)21;
  v = (long)p_21;
  if ((unsigned long)(- (! (~ v_23))) > (unsigned long)v) {
    v_29 = (unsigned char)(- (- p_19 - (long long)(~ p_17)));
    v_27 = (unsigned int)((long long)(! (p_21 - (unsigned int)v_31)) / (
                          (p_19 / (long long)((int)p_11 + 341) + 988054438LL) + 128LL));
    v_9 = (short)((p_19 % -10532LL - -808364626LL) << ((int)v_9 & 63));
  }
  else {
    v_23 = (unsigned int)(504796293ULL / (unsigned long long)((long long)p_17 * - p_19 + 449LL));
    v_13 = (unsigned long long)p_17;
    v_7 = (unsigned char)((unsigned long long)(~ ((long)v_29 - -34405L)) % (
                          v_13 + 197ULL));
  }
  if (((p_19 % (long long)((int)p_17 + 924) + (-1028029171LL - (long long)v_25)) | (long long)(
       (147 * (int)((unsigned char)-2.65084623431e+38f)) % 172)) <= (long long)(
      (unsigned long)((250U + p_21) / 4294950118U) * (497496570UL * (unsigned long)v_27 - (unsigned long)(! v_29)))) {
    v_5 = (unsigned short)(! ((int)v_7 / ((int)v_9 + 386)) / ((int)(- (! p_11)) + 439));
    v = (long)(! (245 % ((int)(! p) + 822)));
    result = (signed char)(v + (long)(79733628 * (int)p - (int)v_5));
  }
  else {
    v_15 = (unsigned char)(((p_21 / (v_23 + 609U)) * (unsigned int)((int)((unsigned char)-2.09922777139e+38f) >> (
                                                                    (int)v_7 & 7))) * 4294925593U);
    v_13 = (unsigned long long)(! p_19);
    result = (signed char)((int)((char)((double)(! v_13) * ((double)v_15 - -392.054748063))) - (int)p_17);
  }
  return result;
}


