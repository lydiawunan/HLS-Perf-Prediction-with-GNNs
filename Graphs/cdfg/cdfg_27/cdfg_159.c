#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 229337457
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, signed char p_4, signed char p_6,
                  float p_15, unsigned long long p_19)
{
  signed char v_29;
  signed char v_27;
  int v_25;
  unsigned long long v_23;
  unsigned short v_21;
  signed char v_17;
  long long v_13;
  float v_11;
  long long v_9;
  double v;
  unsigned char result;
  v_29 = (signed char)-121;
  v_27 = (signed char)67;
  v_25 = (int)p_6;
  v_21 = (unsigned short)43372;
  v_17 = (signed char)p;
  v = (double)p_4;
  result = p;
  if (~ (((int)v_29 / ((int)v_27 + 193)) % (((int)result - (int)((unsigned char)v)) + 443)) != (int)v_17) {
    v_23 = (unsigned long long)(~ ((unsigned long)v_21 * 213471459UL - (unsigned long)result));
    v_21 = (unsigned short)(- p_15);
    v_13 = (long long)((int)((float)(v_23 - 59743ULL) + p_15 / ((float)v_17 + 45.f)) % (
                       ~ ((int)v_17 / ((int)result + 48)) + 878));
  }
  else {
    v_17 = (signed char)((unsigned int)((int)(! result) / (((int)v_27 - (int)v_27) + 5)) ^ 
                         (unsigned int)p_6 * 33459U);
    v_13 = (long long)(~ ((150 - v_25) % ((v_25 + 150) + 92)));
    v_21 = (unsigned short)(~ -27483);
  }
  if ((p_19 % (unsigned long long)((int)v_17 + 755) + (unsigned long long)(- p_6)) % (unsigned long long)(
      (int)v_21 + 295) <= (unsigned long long)p_4) result = (unsigned char)(
                                                   ~ ((int)p + (int)p_4) % (
                                                   (int)(- p_6) / ((int)((signed char)1.9238965909e+38) + 416) + 660));
  else {
    v_11 = (float)v_13;
    v_9 = (long long)(v_11 / ((float)(~ v_13 / (long long)((int)((signed char)p_15) * (int)v_17 + 601)) + 992.f));
    result = (unsigned char)((long long)p_4 / ((long long)v / (74LL * v_9 + 1014LL) + 431LL));
  }
  return result;
}


