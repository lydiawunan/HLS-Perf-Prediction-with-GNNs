#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 73772672
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p, long long p_4, unsigned long long p_7)
{
  signed char v_19;
  unsigned short v_17;
  float v_15;
  char v_13;
  signed char v_11;
  unsigned short v_9;
  float v;
  short result;
  v_19 = (signed char)p;
  v_17 = (unsigned short)p_4;
  v_15 = (float)p_4;
  v_13 = (char)p;
  v_11 = (signed char)-95;
  v_9 = (unsigned short)6639;
  if ((unsigned long long)(((long long)v_19 + ~ p_4) * (long long)(893271456 / (
                                                                   (int)(
                                                                   v_15 + p) + 104))) == p_7) {
    v_11 = (signed char)127;
    v = p;
    v = (float)((unsigned int)((-230.798751831f * v) / ((float)v_9 + 55.f)) / (
                (46796U - (4254461422U - (unsigned int)v_13)) + 121U));
  }
  else {
    result = (short)(- (p + (float)(- v_13)));
    v_9 = (unsigned short)(((int)((short)(v_15 / ((float)v_13 + 645.f))) + (int)result) - (int)(~ v_17));
    v = p + v_15 * (float)(97 * (int)result);
  }
  if ((unsigned long long)((float)p_4 - v) * ((unsigned long long)p_4 ^ p_7) + 
      (unsigned long long)v_9 / (18446744073191096497ULL * (unsigned long long)-1.15155459472e+38f + 219ULL) >= (unsigned long long)(
      0 % 1L >> ((int)(~ v_11) & 31))) result = (short)((long long)(~ (
                                                        (int)((short)p) % 6368)) * 61631LL);
  else {
    result = (short)(~ (-3822201417UL));
    result = - result;
  }
  return result;
}


