#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1019129545
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned int p, unsigned long long p_4, long long p_6,
                  unsigned long long p_8, unsigned char p_17)
{
  unsigned char v_27;
  double v_25;
  unsigned long long v_23;
  unsigned int v_21;
  long v_19;
  unsigned char v_15;
  unsigned int v_13;
  unsigned int v_11;
  signed char v;
  unsigned char result;
  v_27 = (unsigned char)4;
  v_25 = -969.224621117;
  v_23 = p_8;
  v_21 = (unsigned int)p_8;
  v_13 = 215100198U;
  v_11 = 1027258265U;
  v = (signed char)p_4;
  if ((long long)((unsigned int)(! ((int)v_27 << (p_4 & 7ULL))) + - v_11) > 
      (long long)((int)v_25 - 566682134) / (! p_6 + 261LL)) {
    v_13 = 4294964394U + (p - 495465989U) * ~ v_21;
    result = (unsigned char)((unsigned long long)(- p_17) / ((unsigned long long)(
                                                             31915 / (
                                                             (int)((short)6651710976.f) + 294)) % (
                                                             p_4 * (unsigned long long)p + 335ULL) + 746ULL));
    v_11 = (unsigned int)p_6;
  }
  else {
    v = (signed char)((v_23 * (v_23 / 3383202040ULL)) / (! ((unsigned long long)v_27 + p_8) + 998ULL));
    v_23 = (unsigned long long)(- (42746. * v_25)) << (~ (18446744072991327443ULL / (
                                                          v_23 + 179ULL)) & 63ULL);
    result = (unsigned char)((unsigned long long)(! p_6) + (v_23 << (
                                                            p_4 & 63ULL)) % (
                                                           (p_8 - (unsigned long long)v_13) + 835ULL));
  }
  while (! (! ((unsigned long long)p_6 + p_8)) <= (unsigned long long)(- (
         (long long)((unsigned int)v * 32860U) / 792LL))) {
    v_19 = v_13 % ((v_11 << 14U) + 594U);
    v_15 = (unsigned char)((long long)((long)(! p_17) * v_19) % ((111346965LL - (long long)p_17) + 422LL));
    v_13 = (unsigned int)v_15;
    v = (signed char)p_8;
  }
  while_0_break: ;
  return result;
}


