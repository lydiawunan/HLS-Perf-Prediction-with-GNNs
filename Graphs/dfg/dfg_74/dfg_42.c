#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 457992024
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, unsigned short p_4, signed char p_7[5][5],
                 float p_9, unsigned char p_11)
{
  unsigned long long v_17;
  long v_15;
  unsigned char v_13;
  long long v;
  unsigned int result;
  v_17 = (unsigned long long)p_7[0][2];
  v_15 = (long)p_7[3][0];
  v_13 = (unsigned char)77;
  result = (unsigned int)((- (- p_9) - (float)((int)p - 24374 * (int)p_7[0][4])) / (
                          (float)((unsigned long long)(~ v_15) + ~ v_17) + 891.f));
  v = (long long)v_13;
  result = (unsigned int)((((long long)result - v) + (long long)(! p)) / (long long)(
                          ((int)(! p_7[2][0]) ^ ((int)((unsigned char)p_9) + (int)p_11)) + 33) - (long long)(- p_11));
  result = 1U % ((((unsigned int)p - result) % 712U) % (unsigned int)(
                 (int)p / ((int)p_4 + 50) + 348) + 664U);
  return result;
}


