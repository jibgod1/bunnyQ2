VAO와 VBO를 이용해 정점/노멀/인덱스 데이터를 GPU에 한 번만 전송하고, 이후는 glDrawElements로 효율적으로 렌더링합니다.

주요 특징:

VAO/VBO/EBO 사용

정점 위치와 노멀을 각각 버퍼에 저장

glDrawElements로 삼각형 그리기

GPU 메모리를 효율적으로 활용 → 고성능 렌더링
![image](https://github.com/user-attachments/assets/fa29278b-0b6f-48ac-976e-812f27601514)
