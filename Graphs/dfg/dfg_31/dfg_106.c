#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 675347734
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p[4], char p_5, float p_7, long p_9, int p_11)
{
  float v_15;
  float v_13;
  unsigned char v;
  int result;
  v_15 = -8.54678531459e+37f;
  v_13 = v_15;
  v = (unsigned char)(p_11 - (int)((short)(- v_13 / (v_13 + 341.f))) * -31567);
  result = (int)p_9;
  result = (int)(((unsigned int)((int)(- v) % (169 * result + 356)) / (
                  ~ (p[2] + (unsigned int)p_5) + 864U)) / ((unsigned int)(- (
                                                           -6488783872.f - p_7)) + 987U));
  return result;
}


