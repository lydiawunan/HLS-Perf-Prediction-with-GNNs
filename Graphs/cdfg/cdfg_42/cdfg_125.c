#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 284544168
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p[5][1][2])
{
  unsigned int v_11;
  unsigned int v_9;
  unsigned char v_7;
  double v_5;
  long v;
  char result;
  v_11 = (unsigned int)p[1][0][0];
  v_9 = (unsigned int)p[1][0][0];
  v_7 = (unsigned char)p[1][0][1];
  v_5 = (double)p[0][0][1];
  v = 303016550L;
  result = (char)-35;
  if (~ (- v_11) <= ((unsigned int)p[0][0][1] / ((4294967284U + v_11) + 234U)) % (unsigned int)(
                    ~ ((int)p[0][0][0] % ((int)p[1][0][0] + 444)) + 367)) {
    v = -125L;
    v_7 = (unsigned char)(~ ((v_9 + 64U) ^ v_11 * 17152U));
    result = (char)((unsigned long long)(((int)result - -1) - ((int)p[1][0][1] + (int)p[4][0][0])) % (
                    (unsigned long long)v % 18446744073709488465ULL + 627ULL));
  }
  else {
    result = (char)(~ p[3][0][1]);
    v_5 = (double)(char)-105;
    v_7 = v_7;
  }
  while ((float)(! ((int)result * (int)((char)2026738432.f) ^ (int)p[1][0][0])) >= 
         (float)v - ((float)((int)((char)v_5) * (int)result) + 5807185920.f / (
                                                               (float)p[4][0][1] + 384.f))) {
    result = (double)v_7 / 2.48665249072e+38;
    v = 30690L;
    v_7 = (unsigned char)(! (19186427919804LL - (long long)((double)p[2][0][0] + -4740623532.24)));
    v_5 = (double)(! ((int)(- p[0][0][1]) % ((int)(! result) + 410)));
  }
  while_0_break: ;
  return result;
}


