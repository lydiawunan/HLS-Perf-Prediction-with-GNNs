#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 185613726
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, long long p_5, long p_7, unsigned int p_15,
        unsigned char p_17)
{
  long v_13;
  long long v_11;
  unsigned short v_9;
  unsigned long v;
  int result;
  v_13 = (long)p_5;
  v_11 = -15143LL;
  result = (int)p_5;
  result = (int)(~ ((unsigned long long)p_15 / 18446744072741011539ULL) / (unsigned long long)(
                 ((p - (unsigned long)p_17) | (unsigned long)(! p_17)) + 119UL) + (unsigned long long)(
                 (long long)p_7 / (((4178944939LL - p_5) + (long long)(
                                    (unsigned int)result % (p_15 + 595U))) + 36LL)));
  v_9 = (unsigned short)(- (~ v_11) * (long long)(7106L % (131L * v_13 + 173L) - 
                                                  223345999L % (! p_7 + 20L)));
  v = (unsigned long)((long)-5629100873.84 / (((long)result & p_7) % (long)(
                                              (int)(! v_9) + 895) + 703L) >> (
                      result & 31));
  result = (int)((long long)(v * (15792UL / (p + 109UL))) * ~ (- p_5) | 443698583LL);
  return result;
}


