#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 708819397
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p, unsigned long p_5, int p_7,
                   unsigned long p_9, char p_11)
{
  float v_13;
  long long v;
  unsigned short result;
  v_13 = 191.421936035f;
  if (((int)(- p_11) << ((int)((char)(v_13 * 73025552.f)) & 7)) / (p_7 + 182) < (int)p_11) 
    v = (long long)(- ((p << 55ULL) % (unsigned long long)((35462UL + p_5) + 113UL)));
  else v = (long long)(((unsigned long)2.84441657275e+38 - p_5) % (unsigned long)(
                       531505408L * (long)p_7 + 496L) - p_9);
  result = (unsigned short)v;
  return result;
}


