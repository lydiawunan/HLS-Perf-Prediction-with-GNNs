#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 678020394
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p, long long p_4[5][1], int p_6, unsigned int p_11,
        long p_13)
{
  unsigned long v_21;
  int v_19;
  signed char v_17;
  unsigned char v_15;
  long v_9;
  float v;
  int result;
  v_21 = (unsigned long)p_4[3][0];
  v_19 = 7646;
  v_15 = (unsigned char)153;
  if (! (((unsigned long)p_13 - (unsigned long)p_11) - - v_21) <= (unsigned long)(
      ((p_13 - 691L) + 47607L) - - p_13)) {
    v_15 = (unsigned char)((unsigned long)(- p / (unsigned int)(((int)v_15 | 156) + 393)) - 
                           3925758809UL * (455908011UL - (unsigned long)p_13));
    v_9 = (long)((long long)(~ v_15) % (~ p_4[1][0] + 145LL) + -35294LL);
    v = (float)(-23L - p_13);
  }
  else {
    v_17 = (signed char)(((long long)v_19 * p_4[3][0] + (long long)(4294967179U + p_11)) % (
                         p_4[2][0] + 703LL));
    v_9 = (long)(-24984 % (- (p_6 % 78) + 787));
    v = (float)v_17;
  }
  if ((unsigned long)((long)((float)p_4[4][0] - v) / (143L % (v_9 + 727L) + 661L)) + (unsigned long)p_11 < (unsigned long)-9041586547.72) 
    result = (int)p;
  else result = (int)(! (4294954821LL + p_4[1][0]) / (long long)(~ (p_6 * 39) + 687));
  return result;
}


