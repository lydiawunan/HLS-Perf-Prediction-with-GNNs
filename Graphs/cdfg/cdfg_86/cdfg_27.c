#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 244436702
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p, float p_4, unsigned int p_7, signed char p_9,
                  long long p_13)
{
  unsigned long long v_29;
  int v_27;
  long long v_25;
  unsigned short v_23;
  int v_21;
  long v_19;
  long v_17;
  short v_15;
  float v_11;
  signed char v;
  unsigned long result;
  v_29 = 1152ULL;
  v_27 = (int)p_13;
  v_25 = 2373LL;
  v_23 = (unsigned short)p_9;
  v_21 = (int)p_7;
  v_19 = (long)p_9;
  v_17 = -47634L;
  v_15 = (short)p_4;
  v_11 = (float)p_7;
  v = (signed char)-121;
  result = 4143UL;
  if ((long long)((long)(~ p) - v_19 / (long)((int)v + 736)) / (- p_13 + 349LL) <= 
      0LL / ((35250LL - ~ p_13) + 312LL)) {
    v_19 = (long)(((long long)p_7 / (p_13 + 348LL)) % (long long)(v_21 % (
                                                                  (int)p + 641) + 386) - (long long)(
                  (int)(- v_23) * 27));
    v = (signed char)((long)((int)(- p) * (int)((short)((double)v_17 + -4852245646.74))) ^ v_19);
    v_11 = (float)(~ (- p_13) % (long long)((int)v_15 + 740));
  }
  else {
    v_15 = (short)(-10585LL - (((long long)result - v_25) - (long long)result));
    v_21 = (int)(! ((long long)((long)v_15 % (v_17 + 265L)) / ((p_13 ^ (long long)v_21) + 307LL)));
    v = (signed char)((unsigned long long)(p_13 / (long long)(v_21 + 947) + (
                                           v_25 + (long long)v_27)) + v_29);
  }
  if ((float)((int)v / 162) > - ((float)(p_7 * 5U) + (float)p_9 * v_11)) {
    result = (unsigned long)(~ (~ p));
    result = 3340208710UL / ((19UL + (result - (unsigned long)p)) + 554UL);
  }
  else result = 103UL;
  return result;
}


