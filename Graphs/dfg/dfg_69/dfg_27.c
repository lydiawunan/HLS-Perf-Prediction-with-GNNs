#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 497866395
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(double p, float p_7, unsigned char p_11)
{
  signed char v_13;
  unsigned int v_9;
  double v_4;
  unsigned char v;
  signed char result;
  v_13 = (signed char)p_7;
  v_9 = 4294906838U;
  v_4 = (double)(- ((int)p_11 * (int)v_13));
  v_4 = (double)(! ((unsigned int)(60 * (int)((char)p) | (int)p_7) * (
                    (unsigned int)(-12392 * (int)((short)v_4)) + ! v_9)));
  v = (unsigned char)-1.35997481039e+38f;
  result = (signed char)(- (- ((double)v / (- v_4 + 491.))));
  return result;
}


