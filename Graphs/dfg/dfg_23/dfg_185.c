#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 494877102
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long p, long p_11[2][3][4])
{
  unsigned int v_9;
  long v_7;
  unsigned long v_5;
  long v;
  unsigned int result;
  v_9 = 24194U;
  v_7 = 20781L;
  v_5 = (unsigned long)p;
  v = 678615143L;
  v_9 = (unsigned int)((unsigned long)(- (~ p / (! p + 954L))) + ((unsigned long)(! p) % (
                                                                  (unsigned long)v * (unsigned long)v_9 + 635UL)) * (unsigned long)(- (
                                                                 p_11[1][1][1] - -862326504L)));
  result = (unsigned int)((673218063LL * (long long)((unsigned long)v - v_5)) / (long long)(
                          p_11[0][2][0] + 462L) - (long long)(v_5 ^ (unsigned long)(
                                                              - v_7 % (
                                                              (-98L - v_7) + 682L))));
  v = (long)((((float)((long)5.87751068574e+37f - v_7) / 1457373440.f) * (float)(
              (unsigned long)(p % (p + 383L)) ^ (unsigned long)v_9)) / (
             (float)p_11[1][0][0] + 614.f));
  result = (unsigned int)((unsigned long)(! p) * (((unsigned long)(- v) - (unsigned long)(
                                                   result / (result + 430U))) % (
                                                  (- v_5 - (unsigned long)(~ v_7)) + 742UL)));
  return result;
}


