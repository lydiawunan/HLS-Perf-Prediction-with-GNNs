#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 423510444
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, unsigned char p_9, unsigned long long p_13,
              unsigned char p_15, unsigned short p_17)
{
  unsigned long long v_27;
  char v_25;
  signed char v_23;
  long v_21;
  unsigned char v_19;
  unsigned short v_11;
  char v_7;
  unsigned short v_4;
  unsigned int v;
  long long result;
  v_27 = 18446744073709545630ULL;
  v_25 = (char)107;
  v_23 = (signed char)p_17;
  v_21 = 19768L;
  v_19 = (unsigned char)249;
  v_11 = (unsigned short)p;
  v_7 = (char)-105;
  v_4 = (unsigned short)44157;
  while ((unsigned long long)(- ((long)(24948 - (int)v_19) * v_21)) <= 
         p_13 % (unsigned long long)(((int)p_9 / ((int)p_15 + 356) - (
                                      (int)p_15 >> ((int)v_23 & 7))) + 827)) {
    v_7 = (int)v_25 - -48;
    v_23 = (signed char)(~ v_27);
    v_19 = (unsigned char)p_13;
    v_21 = (long)(13756 / ((int)((unsigned short)((double)(41107 + (int)p_9) + 5896703008.52)) + 489));
  }
  while_0_break: ;
  if (- (((int)p_15 - (int)v_7) - ((int)p_17 - (int)v_4)) < - (- (-108 << (
                                                                  p_13 & 7ULL)))) {
    v_7 = (char)(- (((int)p_9 & (int)v_11) * (int)p_9));
    v = (unsigned int)(~ v_7);
    result = (long long)(-195.821105957f - (float)(- v)) % (-85LL * (
                                                            (long long)v_4 * p) + 378LL);
  }
  else result = (long long)p_13;
  return result;
}


