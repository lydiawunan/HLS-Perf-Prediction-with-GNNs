#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 247547753
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, int p_5, short p_9, signed char p_11,
         unsigned short p_13)
{
  long v_15;
  unsigned int v_7;
  int v;
  char result;
  v_15 = 329843088L;
  v_7 = 4294913653U;
  v = 12606;
  v = (int)((unsigned long)((int)p_11 ^ p_5) - p % (unsigned long)(! v_15 / (long)(
                                                                   v + 114) + 815L));
  result = (char)(~ ((int)(! p_9) % ((int)(! p_13) + 881)) + ((int)p_13 >> (
                                                              (int)(! p_13) & 15)));
  v = (int)((! ((unsigned long)result % (p + 907UL)) / ((unsigned long)v_7 + 818UL)) % (unsigned long)(
            - (v % ((int)p_9 + 573)) * ~ (p_5 * (int)p_11) + 164));
  result = (char)((unsigned long)(v << (- p % ((unsigned long)(-3.10713960316e+38f * (float)p_5) + 8UL) & 31UL)) / (
                  (248UL - (p & (unsigned long)(v - 48665))) + 912UL));
  return result;
}


