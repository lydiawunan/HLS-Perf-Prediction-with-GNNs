#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 767263845
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p, unsigned long long p_7[5][4], float p_9, int p_11,
         char p_21)
{
  signed char v_23;
  unsigned char v_19;
  unsigned int v_17;
  float v_15;
  double v_13;
  long v_4;
  unsigned char v;
  char result;
  v_23 = (signed char)-20;
  v_19 = (unsigned char)231;
  v_17 = 4294914688U;
  v_15 = 9821287424.f;
  v = (unsigned char)140;
  result = (char)p_11;
  v_13 = (double)((long long)((((float)v_19 - p_9) / 264.f) / (p_9 + 94.f)) % 25498LL);
  v_4 = (long)((~ ((unsigned long long)v_17 % (p_7[4][3] + 609ULL)) + (unsigned long long)(
                ((int)v_19 - (int)p_21) / ((int)(~ p) + 749))) % (unsigned long long)(
               ((-16990 | (int)p_21) - (int)(! v_23)) % ((int)((v_13 - (double)v) - (double)p_9) + 207) + 689));
  v = (unsigned char)(~ ((int)(~ p) % (59064 / ((int)((unsigned short)v_13) + 966) + 337)) - ! (
                      ((int)v_15 << (p_11 & 31)) + ~ p_11));
  result = (char)(((unsigned long long)((long)v + (v_4 - (long)p)) ^ ! (
                   (unsigned long long)v_4 + p_7[2][2])) % ((unsigned long long)(
                                                            - (282408512.f - p_9) / (
                                                            (float)((
                                                                    (long)p_11 + v_4) + (long)(
                                                                    5 | (int)result)) + 910.f)) + 627ULL));
  return result;
}


