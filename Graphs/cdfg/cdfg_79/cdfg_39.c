#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 94768301
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p[1][2][4], unsigned long long p_4,
           unsigned long p_6, unsigned char p_15, char p_17)
{
  unsigned int v_21;
  long v_19;
  int v_13;
  unsigned short v_11;
  char v_9;
  char v;
  double result;
  v_21 = (unsigned int)p_4;
  v_19 = (long)p[0][1][0];
  v_11 = (unsigned short)60739;
  v_9 = (char)-106;
  v = (char)-19;
  result = -766.627661088;
  if ((unsigned long long)((unsigned int)v_11 - 534356945U * (84U % (
                                                              v_21 + 303U))) <= 
      - ((unsigned long long)v_9 % (p_4 + 18ULL)) / (unsigned long long)(
      ((long long)(-1.89478635698e+38 * (double)p[0][0][2]) + 22135LL) + 675LL)) {
    result = (double)(~ p_6);
    v_9 = (char)((long)p_17 & v_19);
    v_13 = -2106;
  }
  else {
    v_13 = ((int)(~ v_11) / 125) / (- ((int)p[0][1][0] - 28897) + 210);
    v_9 = (char)((unsigned long long)v + (p_4 + p_4 % 18446744073709551501ULL));
    v = (char)(! (~ p_6 % (unsigned long)((-168023346L & (long)p_15) + 17L)));
  }
  while (251 >= ~ ((int)((char)(- result)) | (int)(- v))) {
    v_9 = (int)v_9 / -773300630;
    v_11 = (unsigned short)(! p_6 / (((unsigned long)(54 * (int)p_15) & 3755267019UL) + 655UL));
    result = (double)(char)-119;
    v = (char)(~ ((unsigned long long)((int)v_11 - v_13) - 18446744073329298664ULL));
  }
  while_0_break: ;
  return result;
}


