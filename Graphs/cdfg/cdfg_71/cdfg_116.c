#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 250314632
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, long p_7, short p_9, double p_11,
                  long long p_15)
{
  long long v_21;
  unsigned long v_19;
  long long v_17;
  double v_13;
  unsigned long long v_5;
  float v;
  unsigned char result;
  v_21 = 252433680LL;
  v_19 = 3458978637UL;
  v_17 = -13959LL;
  v_13 = -114.803950651;
  v_5 = (unsigned long long)p_7;
  v = 8505693184.f;
  result = (unsigned char)133;
  if (589LL < v_21) {
    v = (float)(((unsigned long)v * ((unsigned long)p + v_19)) * - (3518115711UL / (unsigned long)(
                                                                    p_7 + 429L)));
    v_19 = (unsigned long)(~ v_5);
    v_5 = (unsigned long long)(~ (((int)p_9 - (int)p_9) ^ ((int)v_13 - 7474)));
  }
  else {
    v = (float)(! (- ((long long)p_7 % (v_21 + 79LL))));
    v_13 = p_11;
    v_19 = (unsigned long)((unsigned long long)((long long)((unsigned long)p * 3463056877UL) ^ (
                                                v_17 + (long long)result)) / (
                           ((unsigned long long)(- v_17) ^ 18446744073709522955ULL % (unsigned long long)(
                                                           (int)p + 558)) + 546ULL));
  }
  if ((long long)(0 % (((long)p_9 - p_7) % ((long)(- v) + 242L) + 84L)) == 
      4155818433LL * (v_21 - (long long)v_13) + - v_17) {
    v = (float)v_5;
    v = (float)(- (! ((int)((unsigned char)v) | (int)p)));
    result = (unsigned char)((v - 3970223616.f) + 262963408.f);
  }
  else {
    v_13 = (double)((unsigned long)-8764720128.f + ! v_19 / (unsigned long)(
                                                   (int)p + 220));
    v = (float)(((long long)(p_11 * v_13) + (p_15 & v_17)) - p_15);
    result = (unsigned char)(! (~ p_7 % (long)(((int)((short)v) | (int)p_9) + 144)));
  }
  return result;
}


