#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 530183335
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p[2][5][4], unsigned char p_5, short p_11, float p_13[4][2],
         float p_15[5])
{
  long long v_25;
  short v_23;
  unsigned char v_21;
  unsigned long long v_19;
  char v_17;
  unsigned short v_9;
  unsigned long long v_7;
  unsigned int v;
  char result;
  v_25 = (long long)p_11;
  v_23 = (short)-80;
  v_21 = (unsigned char)p_15[1];
  v_17 = (char)-71;
  v_9 = (unsigned short)31704;
  v_7 = (unsigned long long)p[0][0][1];
  v = 55352U;
  result = (char)29;
  if ((float)((unsigned int)v_23 | - v * (unsigned int)(! p[0][1][2])) >= 
      (float)result + p_13[3][1]) {
    v_19 = (unsigned long long)((long long)(0 % (((int)v_23 - (int)p_11) + 67)) * (
                                v_25 * (long long)p_15[4] & (long long)(! v_23)));
    v_9 = (unsigned short)((int)v_23 + (int)(- (- p_5)));
    v = (unsigned int)(18446744073202797823ULL * ((16275ULL - v_19) / (unsigned long long)(
                                                  116 % ((int)v_21 + 619) + 915)));
  }
  else {
    v_17 = (char)(55503.f / (- p_15[1] + 480.f));
    v = 4294967223U;
    v_7 = (unsigned long long)((unsigned long)p_5 & (unsigned long)(377516140 + (int)v_23) * 646353858UL);
  }
  if ((int)((float)(- (- p_5)) - - p_15[1] * (float)((int)p_5 + (int)v_17)) <= - (~ (
      (int)v_17 - (int)((char)p_15[4])))) {
    result = (char)(~ v % (unsigned int)(- (24305 | (int)v_9) + 373));
    result = (char)((unsigned long long)((unsigned int)((int)p[0][0][1] | (int)result) - (
                                         v - (unsigned int)p_5)) + v_7);
    result = (char)((-682207974 % (((int)p[1][4][2] | (int)result) + 54)) * (int)-6739799552.f);
  }
  else result = (char)(- 2.22548356926e+38);
  return result;
}


