#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 153333010
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, unsigned int p_4, unsigned long long p_6,
          long p_11, unsigned char p_13)
{
  signed char v_19;
  float v_17;
  unsigned short v_15;
  unsigned char v_9;
  long v;
  short result;
  v_19 = (signed char)p_13;
  v = 42596L;
  v_15 = (unsigned short)p_4;
  v_17 = (float)((9623 / ((int)(~ p_13) % ((int)(- p) + 880) + 616)) % (
                 (int)v_19 + 102));
  v_9 = (unsigned char)((float)p_4 / (v_17 + 995.f) - (float)(~ ((long long)p_13 + 558413610LL) * (long long)p_4));
  result = (short)((unsigned long long)(! ((int)p >> 2LL) + -33205) / (
                   (((unsigned long long)p_4 + p_6) - (unsigned long long)(! v)) / (unsigned long long)(
                   ((long)v_9 * p_11 - (long)((int)p_13 - (int)v_15)) + 476L) + 182ULL));
  return result;
}


