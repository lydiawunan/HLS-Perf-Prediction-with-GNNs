#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1035878308
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p, long p_5, long long p_7, long p_13,
              float p_15[4][4])
{
  short v_21;
  unsigned long long v_19;
  double v_17;
  signed char v_11;
  signed char v_9;
  unsigned long v;
  long long result;
  v_21 = (short)-30413;
  v_19 = 18446744073429381718ULL;
  v_17 = (double)p_5;
  v_11 = (signed char)p_13;
  v = (unsigned long)p_13;
  v_9 = (signed char)(v_19 + (56855ULL % ((unsigned long long)v_21 % (
                                          v_19 + 661ULL) + 350ULL) ^ (unsigned long long)(~ (
                              v / (unsigned long)(p_13 + 486L)))));
  v = (unsigned long)((int)((signed char)((-7065198675.95 + - v_17) - 
                                          ((double)v_19 * 6965155743.29) * 3336188210.)) / (
                      (int)v_9 + 112));
  v_11 = (signed char)((long long)((unsigned int)(- (- p_15[3][1])) - - (
                                   (unsigned int)v_11 / (p + 629U))) + ~ (- (
                       4294959077LL - p_7)));
  result = (long long)(v * (unsigned long)p) % ((((long long)p_5 * p_7 | (
                                                  (long long)p + p_7)) ^ (long long)(
                                                 (long)((int)v_9 << (
                                                        (int)v_11 & 7)) * ! p_13)) + 28LL);
  return result;
}


