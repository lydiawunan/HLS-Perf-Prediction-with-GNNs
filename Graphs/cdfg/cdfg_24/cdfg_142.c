#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 158690515
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, unsigned short p_5, short p_11,
                   long long p_17, unsigned short p_19[4])
{
  signed char v_25;
  signed char v_23;
  unsigned char v_21;
  long v_15;
  int v_13;
  float v_9;
  unsigned long long v_7;
  char v;
  unsigned short result;
  v_25 = (signed char)p_5;
  v_23 = (signed char)p_11;
  v_21 = (unsigned char)p_5;
  v_15 = -95358857L;
  v_13 = -59979;
  v_9 = -793.071350098f;
  v = (char)-53;
  if (0 > (unsigned int)(((int)(! v_21) | (int)p) + (int)v_21)) {
    v = (char)((int)p_19[2] + ~ (12 * (int)((unsigned char)2.82565139842e+38f)));
    v_13 = (int)((158618123LL - (long long)v_15 % (p_17 + 831LL)) - (long long)(- (
                 (int)-8608710463.27 * v_13)));
    v_7 = (unsigned long long)(0 / (long long)(v_13 / ((int)p_11 + 5) + 878) - 4294906742LL);
  }
  else {
    v_21 = (unsigned char)((int)v_23 + (int)(~ (! v_25)));
    v_7 = (unsigned long long)(-535593754LL | (long long)v_21);
    v_9 = (float)(- (- (-(unsigned char)101)));
  }
  if ((unsigned long long)(~ ((int)v + (int)p)) * 33982ULL != 0ULL % (
                                                              (unsigned long long)p_5 * v_7 + 335ULL) + (unsigned long long)(
                                                              (v_9 + -8392281600.f) / (
                                                              (float)(
                                                              917016025L / (long)(
                                                              (int)p_11 + 959)) + 280.f))) 
    result = (unsigned short)(-0U);
  else result = (unsigned short)(~ (~ (char)-74));
  return result;
}


