#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 755085221
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long p, signed char p_5, char p_7, signed char p_9,
                 unsigned short p_11[1][2][4])
{
  unsigned int v_21;
  long v_19;
  int v_17;
  float v_15;
  unsigned long long v_13;
  signed char v;
  unsigned int result;
  v_21 = (unsigned int)p;
  v_19 = 26327L;
  v_17 = (int)p;
  v_15 = -9.59699327206e+37f;
  if ((unsigned long)(! p * (-33L / (p + 936L))) * (unsigned long)v_21 >= (unsigned long)(~ (
      v_19 * 177L + 54601L))) {
    v = (signed char)(-385817586L >> (((long)(- v_15) ^ v_19) & 31L));
    v_15 = (float)(! (~ v_19));
    v_13 = (unsigned long long)(- ((long)v_17 * (p * (long)p_7)));
  }
  else {
    v_15 = (float)(53382. / (-8738364168.2 * (double)((unsigned int)p_7 * v_21) + 319.));
    v = (signed char)(- ((long long)p_11[0][1][3] + 416162169LL) + 6414LL);
    v_13 = (unsigned long long)p_9;
  }
  if ((float)(- (~ ((int)p_9 * (int)p_11[0][1][3]))) > (float)((unsigned long long)(
                                                               -24973 + (int)v) % (
                                                               v_13 % (unsigned long long)(
                                                               (int)p_11[0][0][3] + 868) + 374ULL)) / (
                                                       - (v_15 * -7157.f) + 216.f)) 
    result = 3685161201U;
  else {
    result = (unsigned int)p_7;
    v = (signed char)(~ ((unsigned long)result & (unsigned long)(p / (long)(
                                                                 (int)p_5 + 211))));
    result = (unsigned int)(~ v);
  }
  return result;
}


