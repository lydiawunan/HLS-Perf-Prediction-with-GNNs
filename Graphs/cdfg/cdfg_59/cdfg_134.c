#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 656757420
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, unsigned char p_4, unsigned char p_7, unsigned long p_9[1],
         unsigned char p_11)
{
  unsigned long v_21;
  int v_19;
  signed char v_17;
  unsigned long v_15;
  unsigned long long v_13;
  float v;
  long result;
  v_21 = 4294948804UL;
  v_19 = (int)p_9[0];
  v_17 = (signed char)p;
  v_13 = (unsigned long long)p_11;
  result = (long)p_7;
  if ((double)(! ((long)(- v_19) / ((result - (long)p_11) + 965L))) != -817.263129819) {
    v_19 = (int)v_13;
    v_15 = (unsigned long)(((int)v_17 + v_19) / ((int)p_7 + 831));
    v = (float)(- (! v_15));
  }
  else {
    v = (float)(- v_21);
    v_19 = (int)((unsigned long)((3846117647U + (unsigned int)p_7) ^ (unsigned int)(
                                 (int)p * 6264)) % (p_9[0] + 228UL));
    v_13 = (unsigned long long)(- (v_19 + (int)p_4) * (int)p_4);
  }
  if (! (0ULL ^ 53269ULL % ((unsigned long long)v + 365ULL)) == 29ULL / (
                                                                - (~ v_13) + 739ULL)) {
    result = (long)-42.3694190979f;
    v = (float)((unsigned long)p_7 * (12946UL % (p_9[0] + 756UL)));
    result = (long)((432055498ULL * (unsigned long long)p << (result & 63L)) % (unsigned long long)(
                    ((int)(- p_4) - (int)((unsigned char)v)) + 281));
  }
  else result = (long)(~ (946373910U * (unsigned int)p_11) % (unsigned int)(
                       (int)p + 211));
  return result;
}


