#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 736331111
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p[4][4], short p_7, unsigned short p_13, int p_15,
                  int p_17)
{
  unsigned long v_27;
  unsigned char v_25;
  long long v_23;
  unsigned int v_21;
  unsigned long v_19;
  int v_11;
  unsigned long v_9;
  float v_4;
  char v;
  unsigned long result;
  v_27 = (unsigned long)p_15;
  v_25 = (unsigned char)214;
  v_23 = -20587LL;
  v_21 = (unsigned int)p_7;
  v_19 = 3253416468UL;
  v = (char)17;
  result = (unsigned long)p_7;
  while ((long long)(! (p_17 / ((int)p_13 + 768) + (int)p_13)) == (long long)(
                                                                  (int)-7.52251083669e+17f / (
                                                                  59632 * (int)p_7 + 561)) % (
                                                                  ~ (
                                                                  v_23 / (long long)(
                                                                  (int)p_13 + 962)) + 480LL)) {
    v_21 = v_27 * (unsigned long)((int)v_25 % 31);
    v_25 = (unsigned char)p_15;
    v_19 = (unsigned long)p_15;
    v_23 = - (804333577LL % (long long)(p_15 + 2)) - (long long)(((unsigned long)v + result) / (unsigned long)(
                                                                 ! v_21 + 195U));
  }
  while_0_break: ;
  if (((long long)(((int)p_13 % 20068) / (((int)p_7 ^ (int)p_7) + 630)) | v_23) <= (long long)(
      p_17 * 11)) {
    v_4 = (float)(211 * ((int)p[0][2] - (int)(! p_7)));
    v = (char)(- v_4);
    result = (unsigned long)v;
  }
  else {
    v_9 = (unsigned long)((long long)((unsigned long)p[3][1] ^ v_19) / (
                          (610315664LL & (long long)p_13) + 337LL) & (long long)(
                          (unsigned int)(- p[0][0]) & (unsigned int)p_17 / (
                                                      v_21 + 729U)));
    v_11 = ! p_17;
    result = ((143UL + v_9) | (unsigned long)(v_11 << ((int)p_13 & 31))) - (unsigned long)(
             0 % (p_15 + 776));
  }
  return result;
}


