#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 377652437
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p, unsigned char p_5, unsigned char p_7,
         unsigned long p_15, char p_17)
{
  float v_25;
  short v_23;
  unsigned long v_21;
  unsigned int v_19;
  unsigned short v_13;
  long long v_11;
  unsigned long v_9;
  long long v;
  long result;
  v_25 = (float)p_15;
  v_21 = (unsigned long)p_5;
  v_19 = (unsigned int)p;
  v_13 = (unsigned short)44249;
  v_11 = (long long)p_5;
  v_9 = 3719166336UL;
  v = (long long)p;
  v_23 = (short)((~ v / (long long)((unsigned long)p_17 / (v_21 + 113UL) + 561UL)) % (long long)(
                 ~ (- v_19) + 736U));
  if ((long long)((int)v_23 + (int)p_5) < 0LL / ((long long)((double)(
                                                             472652288.f * v_25) - -260.49340478) + 887LL)) {
    v = (long long)v_9 % (((v_11 | (long long)v_13) | (long long)p_15) + 119LL);
    result = (long)((4294941273LL * v) % (long long)((int)p % ((int)p_5 + 200) + 50) ^ (long long)(
                    (43024 / ((int)((unsigned short)-42.2509966741) + 97)) / (
                    (int)(- p_7) + 769)));
    result = (long)(! ((long long)result + 914923916LL));
  }
  else {
    result = (long)((unsigned long)((long)p_5 / 14217L) * (unsigned long)(
                    v_19 - 4294957506U) ^ v_21);
    v = (long long)(- (210056425UL / (unsigned long)(result + 895L) - 4050649495UL));
    result = (long)((long long)(~ (3725892527U ^ (unsigned int)p_17)) + v);
  }
  return result;
}


