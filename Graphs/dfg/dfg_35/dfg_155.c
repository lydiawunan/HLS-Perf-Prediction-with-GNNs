#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 712048885
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p, unsigned long p_7, int p_11, float p_13,
         unsigned char p_15)
{
  char v_21;
  long v_19;
  long v_17;
  unsigned long v_9;
  unsigned long v_5;
  unsigned long long v;
  char result;
  v_21 = (char)78;
  v_19 = 7931L;
  v_17 = -52974L;
  v_9 = 4084756719UL;
  v = 869331479ULL;
  v_17 = (long)((double)((unsigned long)((v_19 - 14879L) % 79L) - 20954UL) - 
                ((double)((unsigned long)v_21 - p_7) * -463.860803389) / (
                (double)((unsigned long long)v_17 % ((p - (unsigned long long)v_9) + 842ULL)) + 233.));
  v_5 = (unsigned long)(- ((float)((unsigned long long)v_17 * p) + (p_13 - (float)v_9)) / (
                        (float)((int)-4.93441352992e+19 % (- p_11 + 427)) + 951.f));
  v_9 = (unsigned long)(- (~ (~ v) * (unsigned long long)p_15));
  result = (char)(((p - v) - (unsigned long long)(- v_5 % (p_7 / (p_7 + 197UL) + 626UL))) / (unsigned long long)(
                  ((4294967190UL + v_9) - (unsigned long)((float)(113 * p_11) / (
                                                          - p_13 + 467.f))) + 316UL));
  return result;
}


