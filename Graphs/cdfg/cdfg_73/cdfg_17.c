#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 474753454
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, int p_7, long long p_9, long long p_13, double p_15)
{
  double v_27;
  unsigned long v_25;
  unsigned long long v_23;
  long v_21;
  short v_19;
  unsigned long v_17;
  char v_11;
  float v_5;
  unsigned long long v;
  float result;
  v_27 = (double)p_7;
  v_25 = 59538UL;
  v_23 = (unsigned long long)p_7;
  v_21 = -54014L;
  v_19 = (short)16768;
  v_17 = (unsigned long)p;
  v_11 = (char)-74;
  v_5 = (float)p_7;
  v = (unsigned long long)p;
  result = 9953626112.f;
  if ((unsigned long long)(- (! (p_13 - (long long)p))) >= (4294924885ULL ^ 
                                                            (unsigned long long)v_5 * v) << (
                                                           ! ((unsigned int)p_7 % 15993U) & 63U)) {
    v = (unsigned long long)-5552512512.f;
    v_17 = (unsigned long)(v_23 * v);
    v_21 = (long)(~ (! ((long long)v_11 * 19596LL)));
  }
  else {
    v_17 = (unsigned long)((long long)((float)v_17 / (- p + 262.f)) + (
                           p_13 - p_9));
    v_25 = (unsigned long)((unsigned long long)((unsigned long)v_5 + (
                                                (unsigned long)p_15 - v_25)) * v);
    v_19 = (short)((~ v_25 - 3416300455UL) % (unsigned long)(((int)(v_27 + (double)v) + 
                                                              -23036 * (int)((short)result)) + 858));
  }
  if (v_17 * 404620448UL > (unsigned long)(- ((unsigned int)v_19 + 3574075620U)) * (unsigned long)(
                           ((long)p_15 << 28L) / (- v_21 + 242L))) {
    v_5 = (float)(- (866726925ULL * (unsigned long long)p_9));
    v = (unsigned long long)((int)((unsigned char)(v_5 / ((float)p_7 + 525.f))) / 128) + 18446744073043409602ULL;
    result = 118.f * (3226157056.f / ((float)v / (p + 615.f) + 778.f));
  }
  else {
    v = (unsigned long long)p_9;
    v_11 = (char)(4294933440LL * (272LL << (p_13 & 63LL)) - (long long)(
                  (unsigned int)p_15 / 215U));
    result = (float)(- ((unsigned long long)(! p_7) | (v & (unsigned long long)v_11)));
  }
  return result;
}


