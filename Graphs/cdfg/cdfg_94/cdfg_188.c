#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 513172598
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(int p, unsigned long long p_5, unsigned long p_9, long p_13,
        unsigned int p_15)
{
  signed char v_21;
  char v_19;
  signed char v_17;
  unsigned long v_11;
  unsigned char v_7;
  float v;
  int result;
  v_21 = (signed char)29;
  v_19 = (char)p_9;
  v_17 = (signed char)p;
  v_11 = 4294930749UL;
  if ((unsigned long)(- (! p_15 & (unsigned int)v_17)) != ! ((unsigned long)(~ v_19) * (
                                                             v_11 / (unsigned long)(
                                                             (int)v_21 + 886)))) {
    v = (float)p_13;
    v_7 = (unsigned char)((v_11 * (unsigned long)p) * 4294939160UL + 515337003UL);
    result = (int)((unsigned long long)((unsigned long)(- v) + (unsigned long)p / 3332844892UL) & (
                   p_5 * (unsigned long long)v_7 << (p_9 & 63UL)));
  }
  else result = (int)4027427648.58;
  result = (int)((-784110177LL | (long long)(! result)) % (long long)(
                 result + 532));
  return result;
}


