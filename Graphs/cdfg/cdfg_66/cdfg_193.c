#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 938940397
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p[1], int p_9, long long p_19, long long p_21, float p_23)
{
  signed char v_29;
  int v_27;
  long long v_25;
  int v_17;
  int v_15;
  float v_13;
  unsigned char v_11;
  unsigned char v_6;
  float v_4;
  unsigned char v;
  float result;
  v_29 = (signed char)p_23;
  v_27 = 961910624;
  v_25 = -631773471LL;
  v_15 = 502507370;
  v_6 = (unsigned char)p_9;
  if (((long long)p_23 / (v_25 / (long long)(v_27 + 401) + 950LL) & (long long)(! (
       9369UL % (unsigned long)(p_9 + 718)))) < (long long)(((int)((float)v_29 - -184.64074707f) + -349360) % (
                                                            ! p_9 + 551))) {
    v_13 = (float)(signed char)-59;
    v_11 = (unsigned char)(- v_13 - - ((float)v_15 + -8842312704.f));
    v_4 = (float)(p_9 * (int)p[0] ^ (int)v_11);
  }
  else {
    v_4 = (float)p_21;
    v_17 = (int)(~ p_19 * (long long)p[0]);
    v_6 = (unsigned char)(~ v_17);
  }
  if ((650976290UL - (unsigned long)(1534 / ((int)((unsigned short)v_4) + 919))) / (unsigned long)(
      (int)(- p[0]) * (43 / ((int)((char)1.39154390554e+38) + 144)) + 571) != 4294958761UL) {
    v_4 = (float)(char)-116;
    v = (unsigned char)((unsigned long long)((38890 % ((int)((unsigned short)v_4) + 520)) * 61849) - 
                        (unsigned long long)(- v_6) % (((unsigned long long)p[0] & 2562ULL) + 984ULL));
    result = (float)(~ v);
  }
  else {
    result = 3178934016.f;
    result = - (- (- result));
  }
  return result;
}


