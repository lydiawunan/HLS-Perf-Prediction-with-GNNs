//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 433423693
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, unsigned long long p_5, unsigned long p_7,
                   unsigned long p_9, unsigned long p_13)
{
  int v_19;
  signed char v_17;
  unsigned short v_15;
  int v_11;
  float v;
  unsigned short result;
  v_19 = 38656;
  v_11 = 62437;
  v_15 = (unsigned short)(63618UL % (((unsigned long)((int)p % ((int)p + 528)) - (
                                      4023064812UL << (p_13 & 31UL))) / (
                                     (unsigned long)v_19 / (p_7 + 412UL) + 475UL) + 440UL));
  v_17 = (signed char)(! 197012291);
  v = (float)((unsigned long long)((unsigned long)v_11 - p_13) % (! (
                                                                  18446744073709496774ULL / (unsigned long long)(
                                                                  (int)v_15 + 8) << (
                                                                  (unsigned long)v_17 % (
                                                                  p_13 + 44UL) & 63UL)) + 617ULL));
  result = (unsigned short)((unsigned long long)(- (- v) * (float)((int)p << (
                                                                   (17978 + (int)p) & 7))) / (
                            (0ULL - (p_5 & (unsigned long long)(p_7 - p_9))) + 787ULL));
  return result;
}


