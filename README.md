OpenGL의 고전적인 즉시 모드를 사용해 삼각형 데이터를 매 프레임마다 GPU에 전달하여 렌더링합니다.

주요 특징:

glBegin(GL_TRIANGLES) ~ glEnd() 사용

정점과 노멀을 glVertex3f, glNormal3f로 직접 지정

매 프레임마다 CPU에서 GPU로 정점 전송 → 비효율적

![image](https://github.com/user-attachments/assets/70d1757b-c254-4a61-b33d-a6d2480cd869)
