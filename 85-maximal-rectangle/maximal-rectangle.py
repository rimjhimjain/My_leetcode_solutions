class Solution:
    def maximalRectangle(self, matrix: List[List[str]]) -> int:
        if not matrix:
            return 0
        
        def max_area_histogram(heights):
            stack = []
            max_area = 0
            i = 0
            while i < len(heights):
                if not stack or heights[i] >= heights[stack[-1]]:
                    stack.append(i)
                    i += 1
                else:
                    top = stack.pop()
                    area = heights[top] * ((i - stack[-1] - 1) if stack else i)
                    max_area = max(max_area, area)
            while stack:
                top = stack.pop()
                area = heights[top] * ((i - stack[-1] - 1) if stack else i)
                max_area = max(max_area, area)
            return max_area
        
        max_area = 0
        histogram = [0] * len(matrix[0])
        for row in matrix:
            for i in range(len(row)):
                histogram[i] = histogram[i] + 1 if row[i] == '1' else 0
            max_area = max(max_area, max_area_histogram(histogram))
        return max_area
