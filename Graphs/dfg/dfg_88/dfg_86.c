#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 192355658
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p[2][3], unsigned int p_7)
{
  double v_13;
  signed char v_11;
  short v_9;
  unsigned char v_5;
  unsigned long v;
  unsigned short result;
  v_13 = -6357834981.45;
  v_11 = (signed char)p_7;
  v_9 = p[0][2];
  result = (unsigned short)p[0][1];
  v_5 = (unsigned char)(168U % (! (((unsigned int)v_9 - p_7) | (unsigned int)(! p[1][2])) + 443U));
  v_9 = (short)((int)result + ((int)((short)(v_13 * (double)p[0][1])) % (
                               (int)(! p[0][0]) + 381) + (int)(! p[0][0]) / (
                                                         ((int)v_5 | (int)p[0][2]) + 359)));
  v = (unsigned long)v_5;
  result = (unsigned short)((long long)((unsigned long)(((int)result | (int)p[1][2]) / (
                                                        (int)result + 239)) / (
                                        (v - (unsigned long)v_5) % 17422UL + 238UL)) % (
                            ((long long)(- p_7 * (unsigned int)((int)v_9 ^ (int)v_11)) ^ (
                             (long long)((double)p_7 - v_13) + 901046111LL / (long long)(
                                                               p_7 + 277U))) + 780LL));
  return result;
}


