#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 393495333
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p, char p_5, int p_15, char p_17,
         unsigned int p_19)
{
  double v_13;
  short v_11;
  float v_9;
  char v_7;
  float v;
  char result;
  v_13 = -3975706653.94;
  v = (float)p_15;
  result = p_17;
  v_11 = (short)((- p_19 + (unsigned int)(~ result)) % (unsigned int)(
                 p_15 + 900) & (unsigned int)p_15);
  v_7 = (char)((unsigned int)(~ (p_15 - 59124) | -10010));
  v_9 = (float)((unsigned long long)(~ (((int)p_5 + -62) << ((p - (unsigned long long)v_11) & 31ULL))) * (
                (unsigned long long)(-19. - (double)p_5 * v_13) % ((unsigned long long)p_15 * (
                                                                   (unsigned long long)p_17 * p) + 159ULL)));
  result = (char)(- (- (v * (float)p) - (float)((int)p_5 + (int)v_7) / (
                                        v_9 + 806.f)));
  return result;
}


