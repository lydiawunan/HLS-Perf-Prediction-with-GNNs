#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 113866057
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p, signed char p_5, double p_7, signed char p_9,
         long p_13)
{
  char v_27;
  unsigned int v_25;
  unsigned char v_23;
  long long v_21;
  long long v_19;
  unsigned char v_17;
  unsigned char v_15;
  char v_11;
  unsigned int v;
  long result;
  v_27 = (char)2;
  v_25 = 41969U;
  v_21 = (long long)p_13;
  v_15 = (unsigned char)34;
  v_11 = (char)113;
  result = -912709965L;
  if (29848ULL != (unsigned long long)(((unsigned long)v_25 + (unsigned long)(
                                        p_13 & (long)p_5)) | (unsigned long)5.313916078e+37)) {
    v_17 = (unsigned char)(~ (((int)p_5 - (int)((signed char)p_7)) / (
                              (int)p_5 % ((int)v_11 + 115) + 978)));
    v_21 = (long long)((- p_13 % (long)((int)v_17 / ((int)p_9 + 873) + 945)) % (
                       - (71L & p_13) + 834L));
    v_17 = (unsigned char)((43736 + (int)((double)result - -1347717261.72)) - (int)(! p_5));
  }
  else {
    v_17 = (unsigned char)(~ (((long)v_27 - p_13) / -42235L));
    v_23 = (unsigned char)149;
    v_15 = (unsigned char)((int)(- v_23) / ((int)(~ p_9) + 933) >> ((
                                                                    ! v_25 - (unsigned int)(
                                                                    -43 & (int)v_17)) & 31U));
  }
  if (v_21 % (long long)(p_13 + 607L) < (long long)-2.81533582587e+38) {
    v = (unsigned int)((int)((signed char)(3563566512. * - p_7)) + (int)p_9);
    result = (long)(p / (unsigned long long)(v % (((unsigned int)p_5 + v) + 127U) + 748U));
  }
  else {
    v_19 = (long long)(4294709507U / (unsigned int)(~ ((int)p_9 / 120) + 128));
    v_11 = (char)(((unsigned long long)((int)p_9 / ((int)v_15 + 241)) | 
                   (unsigned long long)v_17 * p) % (~ (p + (unsigned long long)v_19) + 469ULL));
    result = (long)((double)((long)(~ v_11) / (p_13 + 362L)) / (- p_7 + 57.));
  }
  return result;
}


