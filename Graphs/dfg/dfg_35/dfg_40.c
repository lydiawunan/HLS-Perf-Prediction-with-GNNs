#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 977927850
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, signed char p_9)
{
  unsigned short v_15;
  double v_13;
  unsigned short v_11;
  float v_6;
  signed char v_4;
  long long v;
  unsigned long long result;
  v_15 = (unsigned short)61456;
  v_13 = 303.724082487;
  v_4 = (signed char)p;
  v = -17184LL;
  result = (unsigned long long)p_9;
  v_11 = v_15;
  v_4 = (signed char)((unsigned long long)(- ((int)v_4 * (int)p) - ! (
                                           (int)p_9 / -61975376)) % (
                      (unsigned long long)(~ (7005 % ((int)v_11 + 571))) * ! (
                      result / 390641890ULL) + 232ULL));
  v_6 = (float)(! ((unsigned long long)((int)((unsigned short)-146.658050537f) * (int)(- v_11)) / (
                   ((unsigned long long)(- v_13) | result) + 427ULL)));
  result = (unsigned long long)(! v - (long long)((148 % ((int)v_4 + 647) - -17762) % (
                                                  ((int)(- v_6) & (int)p % (
                                                                  (int)p_9 + 23)) + 913)));
  return result;
}


