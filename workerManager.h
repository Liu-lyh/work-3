#pragma once
#include"worker.h"
#include <fstream>
#define  FILENAME "empFile.txt"
#include<iostream>
using namespace std;



class WorkerManager
{
public:
    //��¼�ļ��е���������
    int m_EmpNum;
    //��־�ļ��Ƿ�Ϊ��
    bool m_FileIsEmpty;
    //ͳ������
    int get_EmpNum();
    //����ְ������ж�ְ���Ƿ����,�����ڷ���ְ����������λ�ã������ڷ���-1
    int IsExist(int id);


    //Ա�������ָ��
    Worker** m_EmpArray;
    //���캯��
    WorkerManager();
    //չʾ�˵�
    void Show_Menu();
    //��������
    ~WorkerManager();
    //�˳�����
    void exitSystem();
    //����ְ��
    void Add_Emp();
    //�����ļ�
    void save();
    //��ʼ��Ա��
    void init_Emp();
    //��ʾְ��
    void Show_Emp();
    //ɾ��ְ��
    void Del_Emp();
    //�޸�ְ��
    void Mod_Emp();
    //����ְ��
    void Find_Emp();
    //����ļ�
    void Clean_File();
};